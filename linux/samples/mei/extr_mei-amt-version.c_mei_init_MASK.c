
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct mei_client {unsigned char max_msg_length; unsigned char protocol_version; } ;
struct mei_connect_client_data {struct mei_client out_client_properties; int const in_client_uuid; } ;
struct mei {int verbose; int fd; int initialized; unsigned char buf_size; unsigned char prot_ver; int const guid; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct mei_connect_client_data*) ;
 int FUNC_1 (struct mei*) ;
 int FUNC_2 (struct mei*,char*,...) ;
 int FUNC_3 (struct mei*,char*,unsigned char) ;
 int FUNC_4 (int const*,int const*,int) ;
 int FUNC_5 (struct mei_connect_client_data*,int ,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static bool FUNC_7(struct mei *VAR_2, const uuid_le *VAR_3,
  unsigned char VAR_4, bool VAR_5)
{
 int VAR_6;
 struct mei_client *VAR_7;
 struct mei_connect_client_data VAR_8;

 VAR_2->verbose = VAR_5;

 VAR_2->fd = FUNC_6("/dev/mei0", VAR_1);
 if (VAR_2->fd == -1) {
  FUNC_2(VAR_2, "Cannot establish a handle to the Intel MEI driver\n");
  goto err;
 }
 FUNC_4(&VAR_2->guid, VAR_3, sizeof(*VAR_3));
 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_2->initialized = 1;

 FUNC_4(&VAR_8.in_client_uuid, &VAR_2->guid, sizeof(VAR_2->guid));
 VAR_6 = FUNC_0(VAR_2->fd, VAR_0, &VAR_8);
 if (VAR_6) {
  FUNC_2(VAR_2, "IOCTL_MEI_CONNECT_CLIENT receive message. err=%d\n", VAR_6);
  goto err;
 }
 VAR_7 = &VAR_8.out_client_properties;
 FUNC_3(VAR_2, "max_message_length %d\n", VAR_7->max_msg_length);
 FUNC_3(VAR_2, "protocol_version %d\n", VAR_7->protocol_version);

 if ((VAR_4 > 0) &&
      (VAR_7->protocol_version != VAR_4)) {
  FUNC_2(VAR_2, "Intel MEI protocol version not supported\n");
  goto err;
 }

 VAR_2->buf_size = VAR_7->max_msg_length;
 VAR_2->prot_ver = VAR_7->protocol_version;

 return 1;
err:
 FUNC_1(VAR_2);
 return 0;
}

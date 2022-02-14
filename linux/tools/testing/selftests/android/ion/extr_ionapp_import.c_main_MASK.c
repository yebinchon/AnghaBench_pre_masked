
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int sockfd; int datafd; } ;
struct ion_buffer_info {int buffd; unsigned long buflen; unsigned char* buffer; } ;
typedef int info ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ion_buffer_info*) ;
 int FUNC_3 (struct ion_buffer_info*) ;
 int FUNC_4 (struct ion_buffer_info*,int ,int) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (unsigned char*,unsigned long) ;
 int FUNC_8 (struct socket_info*) ;
 int VAR_2 ;
 int FUNC_9 (unsigned char*,unsigned long) ;

int FUNC_10(void)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 unsigned char *VAR_7;
 unsigned long VAR_8;
 struct ion_buffer_info VAR_9;
 struct socket_info VAR_10;


 VAR_4 = FUNC_5(&VAR_5, VAR_1, 0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2, "No exporter exists...\n");
  VAR_3 = VAR_4;
  goto err_socket;
 }

 VAR_10.sockfd = VAR_5;

 VAR_3 = FUNC_8(&VAR_10);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "Failed: socket_receive_fd\n");
  goto err_recv;
 }

 VAR_6 = VAR_10.datafd;
 FUNC_6("Received buffer fd: %d\n", VAR_6);
 if (VAR_6 <= 0) {
  FUNC_1(VAR_2, "ERROR: improper buf fd\n");
  VAR_3 = -1;
  goto err_fd;
 }

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.buffd = VAR_6;
 VAR_9.buflen = VAR_0;

 VAR_3 = FUNC_3(&VAR_9);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "Failed: ion_use_buffer_fd\n");
  goto err_import;
 }

 VAR_7 = VAR_9.buffer;
 VAR_8 = VAR_9.buflen;
 FUNC_7(VAR_7, VAR_8);


 VAR_8 = VAR_0;
 FUNC_9(VAR_7, VAR_8);

err_import:
 FUNC_2(&VAR_9);
err_fd:
err_recv:
err_socket:
 FUNC_0(VAR_5, VAR_1);

 return VAR_3;
}

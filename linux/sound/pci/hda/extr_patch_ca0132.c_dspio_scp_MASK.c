
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scp_msg {void* data; int hdr; } ;
struct hda_codec {int dummy; } ;
typedef int scp_send ;
typedef int scp_reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,unsigned char*,unsigned int,unsigned char*,int,unsigned int*) ;
 int FUNC_2 (int ,int *,int *,unsigned int*,int *,int *,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (int,int,int,int,int ,int ,int ,unsigned int) ;
 int FUNC_4 (void*,void const*,unsigned int) ;
 int FUNC_5 (struct scp_msg*,int ,int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_4,
  int VAR_5, int VAR_6, int VAR_7, int VAR_8, const void *VAR_9,
  unsigned int VAR_10, void *VAR_11, unsigned int *VAR_12)
{
 int VAR_13 = 0;
 struct scp_msg VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 FUNC_5(&VAR_15, 0, sizeof(VAR_15));

 if ((VAR_10 != 0 && VAR_9 == ((void*)0)) || (VAR_10 > VAR_3))
  return -VAR_0;

 if (VAR_8 == VAR_2 && VAR_11 == ((void*)0)) {
  FUNC_0(VAR_4, "dspio_scp get but has no buffer\n");
  return -VAR_0;
 }

 if (VAR_11 != ((void*)0) && (VAR_12 == ((void*)0) || (*VAR_12 == 0))) {
  FUNC_0(VAR_4, "dspio_scp bad resp buf len parms\n");
  return -VAR_0;
 }

 VAR_14.hdr = FUNC_3(VAR_5, VAR_6, (VAR_8 == VAR_2), VAR_7,
           0, 0, 0, VAR_10/sizeof(unsigned int));
 if (VAR_9 != ((void*)0) && VAR_10 > 0) {
  VAR_10 = FUNC_6((unsigned int)(sizeof(VAR_14.data)), VAR_10);
  FUNC_4(VAR_14.data, VAR_9, VAR_10);
 }

 VAR_16 = 0;
 VAR_17 = sizeof(unsigned int) + VAR_10;
 VAR_13 = FUNC_1(VAR_4, (unsigned char *)&VAR_14,
     VAR_17, (unsigned char *)&VAR_15,
     sizeof(VAR_15), &VAR_16);

 if (VAR_13 < 0) {
  FUNC_0(VAR_4, "dspio_scp: send scp msg failed\n");
  return VAR_13;
 }


 FUNC_2(VAR_14.hdr, ((void*)0), ((void*)0), &VAR_19,
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 FUNC_2(VAR_15.hdr, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      &VAR_20, &VAR_21,
      &VAR_22);

 if (!VAR_19)
  return 0;

 if (VAR_20 && !VAR_21) {
  VAR_18 = (VAR_16 - sizeof(VAR_15.hdr))
     / sizeof(unsigned int);

  if (*VAR_12 < VAR_18*sizeof(unsigned int)) {
   FUNC_0(VAR_4, "reply too long for buf\n");
   return -VAR_0;
  } else if (VAR_18 != VAR_22) {
   FUNC_0(VAR_4, "RetLen and HdrLen .NE.\n");
   return -VAR_0;
  } else if (!VAR_11) {
   FUNC_0(VAR_4, "NULL reply\n");
   return -VAR_0;
  } else {
   *VAR_12 = VAR_18*sizeof(unsigned int);
   FUNC_4(VAR_11, VAR_15.data, *VAR_12);
  }
 } else {
  FUNC_0(VAR_4, "reply ill-formed or errflag set\n");
  return -VAR_1;
 }

 return VAR_13;
}

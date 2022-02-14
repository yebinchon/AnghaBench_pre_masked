
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int fd; int data_size; int data; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int) ;

int FUNC_5(struct btf *VAR_4)
{
 __u32 VAR_5 = VAR_0;
 char *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (VAR_4->fd >= 0)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6)
  return -VAR_2;

 *VAR_6 = 0;

 VAR_4->fd = FUNC_0(VAR_4->data, VAR_4->data_size,
          VAR_6, VAR_5, 0);
 if (VAR_4->fd < 0) {
  VAR_7 = -VAR_3;
  FUNC_3("Error loading BTF: %s(%d)\n", FUNC_4(VAR_3), VAR_3);
  if (*VAR_6)
   FUNC_3("%s\n", VAR_6);
  goto done;
 }

done:
 FUNC_1(VAR_6);
 return VAR_7;
}

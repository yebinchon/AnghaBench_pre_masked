
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int fd; int data_size; int data; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 struct btf* FUNC_0 (int) ;
 int FUNC_1 (struct btf*) ;
 int FUNC_2 (struct btf*) ;
 int FUNC_3 (struct btf*) ;
 int FUNC_4 (struct btf*) ;
 struct btf* FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ) ;

struct btf *FUNC_8(__u8 *VAR_1, __u32 VAR_2)
{
 struct btf *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(1, sizeof(struct btf));
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->fd = -1;

 VAR_3->data = FUNC_6(VAR_2);
 if (!VAR_3->data) {
  VAR_4 = -VAR_0;
  goto done;
 }

 FUNC_7(VAR_3->data, VAR_1, VAR_2);
 VAR_3->data_size = VAR_2;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto done;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto done;

 VAR_4 = FUNC_4(VAR_3);

done:
 if (VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(VAR_4);
 }

 return VAR_3;
}

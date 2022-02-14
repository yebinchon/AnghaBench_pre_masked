
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {struct skl_dev* thread_context; } ;
struct skl_lib_info {int dummy; } ;
struct skl_dev {int * lib_info; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct skl_dev*,int *,struct firmware*,int ,int) ;
 int FUNC_1 (struct skl_lib_info*,int) ;
 int FUNC_2 (struct sst_dsp*,int ,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct sst_dsp *VAR_1, struct skl_lib_info *VAR_2, int VAR_3)
{
 struct skl_dev *VAR_4 = VAR_1->thread_context;
 struct firmware VAR_5;
 int VAR_6, VAR_7;


 for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, &VAR_4->lib_info[VAR_7], &VAR_5,
     VAR_0, VAR_7);
  if (VAR_6 < 0)
   goto load_library_failed;
  VAR_6 = FUNC_2(VAR_1, VAR_5.data,
    VAR_5.size, 0, VAR_7, 0);
  if (VAR_6 < 0)
   goto load_library_failed;
 }

 return 0;

load_library_failed:
 FUNC_1(VAR_2, VAR_3);
 return VAR_6;
}

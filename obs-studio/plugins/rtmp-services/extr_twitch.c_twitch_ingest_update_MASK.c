
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ array; } ;
struct file_download_data {TYPE_1__ buffer; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(void *VAR_3, struct file_download_data *VAR_4)
{
 bool VAR_5;

 FUNC_3(&VAR_2);
 VAR_5 = FUNC_1((const char *)VAR_4->buffer.array, 1);
 FUNC_4(&VAR_2);

 if (VAR_5) {
  FUNC_2(&VAR_1, 1);
  FUNC_2(&VAR_0, 1);
 }

 FUNC_0(VAR_3);
 return 1;
}

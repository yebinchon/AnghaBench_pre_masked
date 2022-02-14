
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_block {scalar_t__ file_size; int * file_name; } ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,int *,scalar_t__,struct csum_state*) ;

int
FUNC_1(FILE *VAR_0, struct fw_block *VAR_1, struct csum_state *VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;

 if (VAR_1->file_name == ((void*)0))
  return 0;

 if (VAR_1->file_size == 0)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1->file_name,
   VAR_1->file_size, VAR_2);
 return VAR_3;
}

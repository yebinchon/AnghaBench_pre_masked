
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct error_item {int error; int column; int row; int file; } ;
struct TYPE_2__ {size_t num; struct error_item* array; } ;
struct error_data {TYPE_1__ errors; } ;
struct dstr {char* array; } ;


 int FUNC_0 (struct dstr*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct dstr*) ;

char *FUNC_2(struct error_data *VAR_0)
{
 struct dstr VAR_1;
 struct error_item *VAR_2 = VAR_0->errors.array;
 size_t VAR_3;

 FUNC_1(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0->errors.num; VAR_3++) {
  struct error_item *VAR_4 = VAR_2 + VAR_3;
  FUNC_0(&VAR_1, "%s (%u, %u): %s\n", VAR_4->file, VAR_4->row,
     VAR_4->column, VAR_4->error);
 }

 return VAR_1.array;
}

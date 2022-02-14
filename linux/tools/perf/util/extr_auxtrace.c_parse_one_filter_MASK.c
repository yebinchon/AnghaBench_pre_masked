
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_filter {char* str; int range; int filename; int sym_to_idx; int sym_to; int size; int sym_from_idx; int sym_from; int addr; int action; } ;


 int VAR_0 ;
 int FUNC_0 (struct addr_filter*) ;
 int FUNC_1 (struct addr_filter*) ;
 int FUNC_2 (char**,int *,int *,int *) ;
 int FUNC_3 (char**,int *,int *,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct addr_filter *VAR_1, const char **VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_1->str = VAR_3 = FUNC_4(*VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(&VAR_3, ((void*)0), &VAR_1->action, " ");
 if (VAR_4)
  goto out_err;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  goto out_err;

 VAR_4 = FUNC_2(&VAR_3, &VAR_1->addr, &VAR_1->sym_from,
         &VAR_1->sym_from_idx);
 if (VAR_4)
  goto out_err;

 VAR_3 += FUNC_5(VAR_3, " ");

 if (*VAR_3 == '/') {
  VAR_3 += 1;
  VAR_4 = FUNC_2(&VAR_3, &VAR_1->size, &VAR_1->sym_to,
          &VAR_1->sym_to_idx);
  if (VAR_4)
   goto out_err;
  VAR_1->range = 1;
 }

 VAR_3 += FUNC_5(VAR_3, " ");

 if (*VAR_3 == '@') {
  VAR_3 += 1;
  VAR_4 = FUNC_3(&VAR_3, ((void*)0), &VAR_1->filename, " ,");
  if (VAR_4)
   goto out_err;
 }

 VAR_3 += FUNC_5(VAR_3, " ,");

 *VAR_2 += VAR_3 - VAR_1->str;

 return 0;

out_err:
 FUNC_0(VAR_1);

 return VAR_4;
}

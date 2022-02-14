
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int version; int stamp; unsigned int n_functions; struct gcov_fn_info** functions; } ;
struct gcov_fn_info {int ident; int lineno_checksum; int cfg_checksum; struct gcov_ctr_info* ctrs; } ;
struct gcov_ctr_info {int num; int * values; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gcov_info*,unsigned int) ;
 scalar_t__ FUNC_2 (char*,size_t,int) ;
 scalar_t__ FUNC_3 (char*,size_t,int ) ;

__attribute__((used)) static size_t FUNC_4(char *VAR_4, struct gcov_info *VAR_5)
{
 struct gcov_fn_info *VAR_6;
 struct gcov_ctr_info *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 size_t VAR_11 = 0;


 VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_1);
 VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_5->version);
 VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_5->stamp);

 for (VAR_8 = 0; VAR_8 < VAR_5->n_functions; VAR_8++) {
  VAR_6 = VAR_5->functions[VAR_8];


  VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_2);
  VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_3);
  VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_6->ident);
  VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_6->lineno_checksum);
  VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_6->cfg_checksum);

  VAR_7 = VAR_6->ctrs;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (!FUNC_1(VAR_5, VAR_9))
    continue;


   VAR_11 += FUNC_2(VAR_4, VAR_11,
           FUNC_0(VAR_9));
   VAR_11 += FUNC_2(VAR_4, VAR_11, VAR_7->num * 2);

   for (VAR_10 = 0; VAR_10 < VAR_7->num; VAR_10++) {
    VAR_11 += FUNC_3(VAR_4, VAR_11,
            VAR_7->values[VAR_10]);
   }

   VAR_7++;
  }
 }

 return VAR_11;
}

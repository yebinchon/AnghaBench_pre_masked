
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {char* type; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int *,int *,int *) ;
 int FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (struct effect_parser*,struct ep_param*,int) ;

__attribute__((used)) static inline int FUNC_3(struct effect_parser *VAR_2,
             struct ep_param *VAR_3,
             bool VAR_4)
{
 const char *VAR_5 = VAR_3->type + (VAR_4 ? 5 : 3);
 int VAR_6 = 0, VAR_7, VAR_8;



 if (VAR_5[0] < '1' || VAR_5[0] > '4')
  FUNC_0(&VAR_2->cfp, "Invalid row count", VAR_0, ((void*)0),
       ((void*)0), ((void*)0));

 VAR_6 = VAR_5[0] - '0';

 if (VAR_5[1] == 'x') {
  if (VAR_5[2] < '1' || VAR_5[2] > '4')
   FUNC_0(&VAR_2->cfp, "Invalid column count", VAR_0,
        ((void*)0), ((void*)0), ((void*)0));

  VAR_6 *= VAR_5[2] - '0';
 }



 VAR_7 = FUNC_1(&VAR_2->cfp, "{", ";", ((void*)0));
 if (VAR_7 != VAR_1)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  char *VAR_9 = ((VAR_8 + 1) < VAR_6) ? "," : "}";

  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_7 != VAR_1)
   return VAR_7;

  VAR_7 = FUNC_1(&VAR_2->cfp, VAR_9, ";", ((void*)0));
  if (VAR_7 != VAR_1)
   return VAR_7;
 }

 return VAR_1;
}

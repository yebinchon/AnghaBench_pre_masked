
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_calipso_ops {int (* doi_walk ) (int *,int (*) (struct calipso_doi*,void*),void*) ;} ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (int *,int (*) (struct calipso_doi*,void*),void*) ;

int FUNC_2(u32 *VAR_1,
       int (*VAR_2)(struct calipso_doi *VAR_3, void *VAR_4),
       void *VAR_5)
{
 int VAR_6 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_7 = FUNC_0();

 if (VAR_7)
  VAR_6 = VAR_7->doi_walk(VAR_1, VAR_2, VAR_5);
 return VAR_6;
}

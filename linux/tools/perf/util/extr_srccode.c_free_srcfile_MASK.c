
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcfile {int fn; int lines; scalar_t__ maplen; int map; int hash_nd; int nd; } ;


 int FUNC_0 (struct srcfile*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct srcfile *VAR_2)
{
 FUNC_2(&VAR_2->nd);
 FUNC_1(&VAR_2->hash_nd);
 VAR_0 -= VAR_2->maplen;
 FUNC_3(VAR_2->map, VAR_2->maplen);
 FUNC_4(&VAR_2->lines);
 FUNC_4(&VAR_2->fn);
 FUNC_0(VAR_2);
 VAR_1--;
}

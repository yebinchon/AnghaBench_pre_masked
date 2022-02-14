
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rd_amcache; int rd_indexcxt; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef int HashMetaPageData ;
typedef int HashMetaPage ;
typedef int Buffer ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (char*,int ,int) ;

HashMetaPage
FUNC_8(Relation VAR_5, Buffer *VAR_6, bool VAR_7)
{
 Page VAR_8;

 FUNC_0(VAR_6);
 if (VAR_7 || VAR_5->rd_amcache == ((void*)0))
 {
  char *VAR_9 = ((void*)0);







  if (VAR_5->rd_amcache == ((void*)0))
   VAR_9 = FUNC_5(VAR_5->rd_indexcxt,
            sizeof(HashMetaPageData));


  if (FUNC_2(*VAR_6))
   FUNC_4(*VAR_6, VAR_0);
  else
   *VAR_6 = FUNC_6(VAR_5, VAR_2, VAR_3,
         VAR_4);
  VAR_8 = FUNC_1(*VAR_6);


  if (VAR_5->rd_amcache == ((void*)0))
   VAR_5->rd_amcache = VAR_9;
  FUNC_7(VAR_5->rd_amcache, FUNC_3(VAR_8),
      sizeof(HashMetaPageData));


  FUNC_4(*VAR_6, VAR_1);
 }

 return (HashMetaPage) VAR_5->rd_amcache;
}

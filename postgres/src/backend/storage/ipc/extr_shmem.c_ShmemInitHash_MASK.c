
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hctl; int alloc; int max_dsize; int dsize; } ;
typedef int HTAB ;
typedef int HASHHDR ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char const*,int ,int*) ;
 int * FUNC_1 (char const*,long,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (long) ;

HTAB *
FUNC_4(const char *VAR_5,
     long VAR_6,
     long VAR_7,
     HASHCTL *VAR_8,
     int VAR_9)
{
 bool VAR_10;
 void *VAR_11;
 VAR_8->dsize = VAR_8->max_dsize = FUNC_3(VAR_7);
 VAR_8->alloc = VAR_4;
 VAR_9 |= VAR_3 | VAR_0 | VAR_2;


 VAR_11 = FUNC_0(VAR_5,
          FUNC_2(VAR_8, VAR_9),
          &VAR_10);





 if (VAR_10)
  VAR_9 |= VAR_1;


 VAR_8->hctl = (HASHHDR *) VAR_11;

 return FUNC_1(VAR_5, VAR_6, VAR_8, VAR_9);
}

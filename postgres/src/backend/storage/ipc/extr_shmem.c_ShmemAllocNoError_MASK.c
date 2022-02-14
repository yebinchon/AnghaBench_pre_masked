
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ freeoffset; scalar_t__ totalsize; } ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void *
FUNC_4(Size VAR_3)
{
 Size VAR_4;
 Size VAR_5;
 void *VAR_6;
 VAR_3 = FUNC_1(VAR_3);

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_2(VAR_1);

 VAR_4 = VAR_2->freeoffset;

 VAR_5 = VAR_4 + VAR_3;
 if (VAR_5 <= VAR_2->totalsize)
 {
  VAR_6 = (void *) ((char *) VAR_0 + VAR_4);
  VAR_2->freeoffset = VAR_5;
 }
 else
  VAR_6 = ((void*)0);

 FUNC_3(VAR_1);


 FUNC_0(VAR_6 == (void *) FUNC_1(VAR_6));

 return VAR_6;
}

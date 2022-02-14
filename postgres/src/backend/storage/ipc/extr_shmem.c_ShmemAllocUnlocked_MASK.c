
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ freeoffset; scalar_t__ totalsize; } ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__) ;

void *
FUNC_5(Size VAR_4)
{
 Size VAR_5;
 Size VAR_6;
 void *VAR_7;




 VAR_4 = FUNC_1(VAR_4);

 FUNC_0(VAR_3 != ((void*)0));

 VAR_5 = VAR_3->freeoffset;

 VAR_6 = VAR_5 + VAR_4;
 if (VAR_6 > VAR_3->totalsize)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("out of shared memory (%zu bytes requested)",
      VAR_4)));
 VAR_3->freeoffset = VAR_6;

 VAR_7 = (void *) ((char *) VAR_2 + VAR_5);

 FUNC_0(VAR_7 == (void *) FUNC_1(VAR_7));

 return VAR_7;
}

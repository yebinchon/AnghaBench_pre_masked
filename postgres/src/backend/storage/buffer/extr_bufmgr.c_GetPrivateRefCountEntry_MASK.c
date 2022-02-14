
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer; int refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* FUNC_4 (int ,void*,int ,int*) ;

__attribute__((used)) static PrivateRefCountEntry *
FUNC_5(Buffer VAR_8, bool VAR_9)
{
 PrivateRefCountEntry *VAR_10;
 int VAR_11;

 FUNC_0(FUNC_2(VAR_8));
 FUNC_0(!FUNC_1(VAR_8));





 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
 {
  VAR_10 = &VAR_3[VAR_11];

  if (VAR_10->buffer == VAR_8)
   return VAR_10;
 }
 if (VAR_5 == 0)
  return ((void*)0);

 VAR_10 = FUNC_4(VAR_4,
       (void *) &VAR_8,
       VAR_0,
       ((void*)0));

 if (VAR_10 == ((void*)0))
  return ((void*)0);
 else if (!VAR_9)
 {

  return VAR_10;
 }
 else
 {

  bool VAR_12;
  PrivateRefCountEntry *VAR_13;


  FUNC_3();


  FUNC_0(VAR_7 != ((void*)0));
  VAR_13 = VAR_7;
  VAR_7 = ((void*)0);
  FUNC_0(VAR_13->buffer == VAR_2);


  VAR_13->buffer = VAR_8;
  VAR_13->refcount = VAR_10->refcount;


  FUNC_4(VAR_4,
     (void *) &VAR_8,
     VAR_1,
     &VAR_12);
  FUNC_0(VAR_12);
  FUNC_0(VAR_5 > 0);
  VAR_5--;

  return VAR_13;
 }
}

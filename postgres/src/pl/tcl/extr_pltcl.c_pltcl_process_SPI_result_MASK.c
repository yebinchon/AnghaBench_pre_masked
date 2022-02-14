
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64 ;
typedef int TupleDesc ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_4__ {int tupdesc; int * vals; } ;
typedef TYPE_1__ SPITupleTable ;
typedef int HeapTuple ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char const*,size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_8(Tcl_Interp *VAR_5,
       const char *VAR_6,
       Tcl_Obj *VAR_7,
       int VAR_8,
       SPITupleTable *VAR_9,
       uint64 VAR_10)
{
 int VAR_11 = VAR_3;
 int VAR_12;
 HeapTuple *VAR_13;
 TupleDesc VAR_14;

 switch (VAR_8)
 {
  case 131:
  case 135:
  case 137:
  case 130:
   FUNC_6(VAR_5, FUNC_5(VAR_10));
   break;

  case 128:
  case 133:
   if (VAR_9 == ((void*)0))
   {
    FUNC_6(VAR_5, FUNC_4(0));
    break;
   }



  case 132:
  case 134:
  case 136:
  case 129:




   VAR_13 = VAR_9->vals;
   VAR_14 = VAR_9->tupdesc;

   if (VAR_7 == ((void*)0))
   {




    if (VAR_10 > 0)
     FUNC_7(VAR_5, VAR_6, 0,
             VAR_13[0], VAR_14);
   }
   else
   {




    uint64 VAR_15;

    for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
    {
     FUNC_7(VAR_5, VAR_6, VAR_15,
             VAR_13[VAR_15], VAR_14);

     VAR_12 = FUNC_3(VAR_5, VAR_7, 0);

     if (VAR_12 == VAR_3)
      continue;
     if (VAR_12 == VAR_1)
      continue;
     if (VAR_12 == VAR_4)
     {
      VAR_11 = VAR_4;
      break;
     }
     if (VAR_12 == VAR_0)
      break;
     VAR_11 = VAR_2;
     break;
    }
   }

   if (VAR_11 == VAR_3)
   {
    FUNC_6(VAR_5, FUNC_5(VAR_10));
   }
   break;

  default:
   FUNC_2(VAR_5, "pltcl: SPI_execute failed: ",
        FUNC_1(VAR_8), ((void*)0));
   VAR_11 = VAR_2;
   break;
 }

 FUNC_0(VAR_9);

 return VAR_11;
}

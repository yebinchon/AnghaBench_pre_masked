
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_22__ {int tag; int buf_id; } ;
struct TYPE_19__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_20__ {TYPE_12__ node; } ;
struct TYPE_21__ {TYPE_1__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef int LWLock ;
typedef int ForkNumber ;
typedef int BufferTag ;
typedef TYPE_3__ BufferDesc ;
typedef int * BufferAccessStrategy ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_10 (int) ;
 int FUNC_11 (int ,TYPE_12__,int ,int ) ;
 int VAR_11 ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (TYPE_3__*) ;
 char VAR_14 ;
 int FUNC_18 () ;
 int FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_21 (int *,int*) ;
 scalar_t__ FUNC_22 (int *,TYPE_3__*) ;
 int FUNC_23 (int ,int ,int ,int ,int ) ;
 int FUNC_24 (int ,int ,int ,int ,int ) ;
 int FUNC_25 (TYPE_3__*,int) ;
 int FUNC_26 (TYPE_3__*,int) ;
 scalar_t__ FUNC_27 (int ) ;

__attribute__((used)) static BufferDesc *
FUNC_28(SMgrRelation VAR_15, char VAR_16, ForkNumber VAR_17,
   BlockNumber VAR_18,
   BufferAccessStrategy VAR_19,
   bool *VAR_20)
{
 BufferTag VAR_21;
 uint32 VAR_22;
 LWLock *VAR_23;
 BufferTag VAR_24;
 uint32 VAR_25;
 LWLock *VAR_26;
 uint32 VAR_27;
 int VAR_28;
 BufferDesc *VAR_29;
 bool VAR_30;
 uint32 VAR_31;


 FUNC_11(VAR_21, VAR_15->smgr_rnode.node, VAR_17, VAR_18);


 VAR_22 = FUNC_4(&VAR_21);
 VAR_23 = FUNC_2(VAR_22);


 FUNC_12(VAR_23, VAR_13);
 VAR_28 = FUNC_6(&VAR_21, VAR_22);
 if (VAR_28 >= 0)
 {





  VAR_29 = FUNC_10(VAR_28);

  VAR_30 = FUNC_16(VAR_29, VAR_19);


  FUNC_14(VAR_23);

  *VAR_20 = 1;

  if (!VAR_30)
  {







   if (FUNC_20(VAR_29, 1))
   {




    *VAR_20 = 0;
   }
  }

  return VAR_29;
 }





 FUNC_14(VAR_23);


 for (;;)
 {




  FUNC_18();





  VAR_29 = FUNC_21(VAR_19, &VAR_31);

  FUNC_0(FUNC_1(VAR_31) == 0);


  VAR_27 = VAR_31 & VAR_7;


  FUNC_17(VAR_29);
  if (VAR_27 & VAR_1)
  {
   if (FUNC_13(FUNC_7(VAR_29),
           VAR_13))
   {







    if (VAR_19 != ((void*)0))
    {
     XLogRecPtr VAR_32;


     VAR_31 = FUNC_15(VAR_29);
     VAR_32 = FUNC_8(VAR_29);
     FUNC_25(VAR_29, VAR_31);

     if (FUNC_27(VAR_32) &&
      FUNC_22(VAR_19, VAR_29))
     {

      FUNC_14(FUNC_7(VAR_29));
      FUNC_26(VAR_29, 1);
      continue;
     }
    }


    FUNC_24(VAR_17, VAR_18,
                VAR_15->smgr_rnode.node.spcNode,
                VAR_15->smgr_rnode.node.dbNode,
                VAR_15->smgr_rnode.node.relNode);

    FUNC_9(VAR_29, ((void*)0));
    FUNC_14(FUNC_7(VAR_29));

    FUNC_19(&VAR_10,
             &VAR_29->tag);

    FUNC_23(VAR_17, VAR_18,
               VAR_15->smgr_rnode.node.spcNode,
               VAR_15->smgr_rnode.node.dbNode,
               VAR_15->smgr_rnode.node.relNode);
   }
   else
   {




    FUNC_26(VAR_29, 1);
    continue;
   }
  }





  if (VAR_27 & VAR_5)
  {





   VAR_24 = VAR_29->tag;
   VAR_25 = FUNC_4(&VAR_24);
   VAR_26 = FUNC_2(VAR_25);





   if (VAR_26 < VAR_23)
   {
    FUNC_12(VAR_26, VAR_12);
    FUNC_12(VAR_23, VAR_12);
   }
   else if (VAR_26 > VAR_23)
   {
    FUNC_12(VAR_23, VAR_12);
    FUNC_12(VAR_26, VAR_12);
   }
   else
   {

    FUNC_12(VAR_23, VAR_12);
   }
  }
  else
  {

   FUNC_12(VAR_23, VAR_12);

   VAR_26 = ((void*)0);

   VAR_25 = 0;
  }
  VAR_28 = FUNC_5(&VAR_21, VAR_22, VAR_29->buf_id);

  if (VAR_28 >= 0)
  {






   FUNC_26(VAR_29, 1);


   if (VAR_26 != ((void*)0) &&
    VAR_26 != VAR_23)
    FUNC_14(VAR_26);



   VAR_29 = FUNC_10(VAR_28);

   VAR_30 = FUNC_16(VAR_29, VAR_19);


   FUNC_14(VAR_23);

   *VAR_20 = 1;

   if (!VAR_30)
   {







    if (FUNC_20(VAR_29, 1))
    {




     *VAR_20 = 0;
    }
   }

   return VAR_29;
  }




  VAR_31 = FUNC_15(VAR_29);







  VAR_27 = VAR_31 & VAR_7;
  if (FUNC_1(VAR_31) == 1 && !(VAR_27 & VAR_1))
   break;

  FUNC_25(VAR_29, VAR_31);
  FUNC_3(&VAR_21, VAR_22);
  if (VAR_26 != ((void*)0) &&
   VAR_26 != VAR_23)
   FUNC_14(VAR_26);
  FUNC_14(VAR_23);
  FUNC_26(VAR_29, 1);
 }
 VAR_29->tag = VAR_21;
 VAR_31 &= ~(VAR_6 | VAR_1 | VAR_3 |
       VAR_0 | VAR_2 | VAR_4 |
       VAR_8);
 if (VAR_16 == VAR_14 || VAR_17 == VAR_11)
  VAR_31 |= VAR_5 | VAR_4 | VAR_9;
 else
  VAR_31 |= VAR_5 | VAR_9;

 FUNC_25(VAR_29, VAR_31);

 if (VAR_26 != ((void*)0))
 {
  FUNC_3(&VAR_24, VAR_25);
  if (VAR_26 != VAR_23)
   FUNC_14(VAR_26);
 }

 FUNC_14(VAR_23);






 if (FUNC_20(VAR_29, 1))
  *VAR_20 = 0;
 else
  *VAR_20 = 1;

 return VAR_29;
}

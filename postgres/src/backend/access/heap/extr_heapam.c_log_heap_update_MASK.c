
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {void* new_xmax; scalar_t__ new_offnum; int old_infobits_set; void* old_xmax; scalar_t__ old_offnum; int flags; } ;
typedef TYPE_2__ xl_heap_update ;
struct TYPE_17__ {scalar_t__ t_hoff; int t_infomask; int t_infomask2; } ;
typedef TYPE_3__ xl_heap_header ;
typedef int uint8 ;
typedef size_t uint16 ;
typedef int XLogRecPtr ;
struct TYPE_19__ {int t_len; TYPE_13__* t_data; int t_self; } ;
struct TYPE_18__ {TYPE_1__* rd_rel; } ;
struct TYPE_15__ {scalar_t__ relreplident; } ;
struct TYPE_14__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef TYPE_4__* Relation ;
typedef int Page ;
typedef TYPE_5__* HeapTuple ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (TYPE_13__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,size_t) ;
 int FUNC_13 (int,scalar_t__,int) ;
 int FUNC_14 (char*,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static XLogRecPtr
FUNC_17(Relation VAR_20, Buffer VAR_21,
    Buffer VAR_22, HeapTuple VAR_23, HeapTuple VAR_24,
    HeapTuple VAR_25,
    bool VAR_26, bool VAR_27)
{
 xl_heap_update VAR_28;
 xl_heap_header VAR_29;
 xl_heap_header VAR_30;
 uint8 VAR_31;
 uint16 VAR_32[2];
 uint16 VAR_33 = 0,
    VAR_34 = 0;
 XLogRecPtr VAR_35;
 Page VAR_36 = FUNC_1(VAR_22);
 bool VAR_37 = FUNC_7(VAR_20);
 bool VAR_38;
 int VAR_39;


 FUNC_0(FUNC_8(VAR_20));

 FUNC_9();

 if (FUNC_3(VAR_24))
  VAR_31 = VAR_16;
 else
  VAR_31 = VAR_18;
 if (VAR_21 == VAR_22 && !VAR_37 &&
  !FUNC_10(VAR_22))
 {
  char *VAR_40 = (char *) VAR_23->t_data + VAR_23->t_data->t_hoff;
  char *VAR_41 = (char *) VAR_24->t_data + VAR_24->t_data->t_hoff;
  int VAR_42 = VAR_23->t_len - VAR_23->t_data->t_hoff;
  int VAR_43 = VAR_24->t_len - VAR_24->t_data->t_hoff;


  for (VAR_33 = 0; VAR_33 < FUNC_5(VAR_42, VAR_43); VAR_33++)
  {
   if (VAR_41[VAR_33] != VAR_40[VAR_33])
    break;
  }





  if (VAR_33 < 3)
   VAR_33 = 0;


  for (VAR_34 = 0; VAR_34 < FUNC_5(VAR_42, VAR_43) - VAR_33; VAR_34++)
  {
   if (VAR_41[VAR_43 - VAR_34 - 1] != VAR_40[VAR_42 - VAR_34 - 1])
    break;
  }
  if (VAR_34 < 3)
   VAR_34 = 0;
 }


 VAR_28.flags = 0;
 if (VAR_26)
  VAR_28.flags |= VAR_13;
 if (VAR_27)
  VAR_28.flags |= VAR_12;
 if (VAR_33 > 0)
  VAR_28.flags |= VAR_14;
 if (VAR_34 > 0)
  VAR_28.flags |= VAR_15;
 if (VAR_37)
 {
  VAR_28.flags |= VAR_9;
  if (VAR_25)
  {
   if (VAR_20->rd_rel->relreplident == VAR_4)
    VAR_28.flags |= VAR_11;
   else
    VAR_28.flags |= VAR_10;
  }
 }


 if (FUNC_4(&(VAR_24->t_self)) == VAR_0 &&
  FUNC_6(VAR_36) == VAR_0)
 {
  VAR_31 |= VAR_17;
  VAR_38 = 1;
 }
 else
  VAR_38 = 0;


 VAR_28.old_offnum = FUNC_4(&VAR_23->t_self);
 VAR_28.old_xmax = FUNC_2(VAR_23->t_data);
 VAR_28.old_infobits_set = FUNC_16(VAR_23->t_data->t_infomask,
             VAR_23->t_data->t_infomask2);


 VAR_28.new_offnum = FUNC_4(&VAR_24->t_self);
 VAR_28.new_xmax = FUNC_2(VAR_24->t_data);

 VAR_39 = VAR_2;
 if (VAR_38)
  VAR_39 |= VAR_3;
 if (VAR_37)
  VAR_39 |= VAR_1;

 FUNC_13(0, VAR_22, VAR_39);
 if (VAR_21 != VAR_22)
  FUNC_13(1, VAR_21, VAR_2);

 FUNC_14((char *) &VAR_28, VAR_7);




 if (VAR_33 > 0 || VAR_34 > 0)
 {
  if (VAR_33 > 0 && VAR_34 > 0)
  {
   VAR_32[0] = VAR_33;
   VAR_32[1] = VAR_34;
   FUNC_12(0, (char *) &VAR_32, sizeof(uint16) * 2);
  }
  else if (VAR_33 > 0)
  {
   FUNC_12(0, (char *) &VAR_33, sizeof(uint16));
  }
  else
  {
   FUNC_12(0, (char *) &VAR_34, sizeof(uint16));
  }
 }

 VAR_29.t_infomask2 = VAR_24->t_data->t_infomask2;
 VAR_29.t_infomask = VAR_24->t_data->t_infomask;
 VAR_29.t_hoff = VAR_24->t_data->t_hoff;
 FUNC_0(VAR_8 + VAR_33 + VAR_34 <= VAR_24->t_len);






 FUNC_12(0, (char *) &VAR_29, VAR_6);
 if (VAR_33 == 0)
 {
  FUNC_12(0,
       ((char *) VAR_24->t_data) + VAR_8,
       VAR_24->t_len - VAR_8 - VAR_34);
 }
 else
 {





  if (VAR_24->t_data->t_hoff - VAR_8 > 0)
  {
   FUNC_12(0,
        ((char *) VAR_24->t_data) + VAR_8,
        VAR_24->t_data->t_hoff - VAR_8);
  }


  FUNC_12(0,
       ((char *) VAR_24->t_data) + VAR_24->t_data->t_hoff + VAR_33,
       VAR_24->t_len - VAR_24->t_data->t_hoff - VAR_33 - VAR_34);
 }


 if (VAR_37 && VAR_25)
 {

  VAR_30.t_infomask2 = VAR_25->t_data->t_infomask2;
  VAR_30.t_infomask = VAR_25->t_data->t_infomask;
  VAR_30.t_hoff = VAR_25->t_data->t_hoff;

  FUNC_14((char *) &VAR_30, VAR_6);


  FUNC_14((char *) VAR_25->t_data + VAR_8,
       VAR_25->t_len - VAR_8);
 }


 FUNC_15(VAR_19);

 VAR_35 = FUNC_11(VAR_5, VAR_31);

 return VAR_35;
}

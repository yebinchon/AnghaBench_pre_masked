
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_10__ {size_t combocid; } ;
struct TYPE_9__ {size_t cmin; size_t cmax; } ;
struct TYPE_8__ {int keysize; int entrysize; int hcxt; } ;
typedef TYPE_1__ HASHCTL ;
typedef size_t CommandId ;
typedef TYPE_2__ ComboCidKeyData ;
typedef int ComboCidEntryData ;
typedef TYPE_3__* ComboCidEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int * VAR_8 ;
 int * FUNC_1 (char*,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static CommandId
FUNC_5(CommandId VAR_11, CommandId VAR_12)
{
 CommandId VAR_13;
 ComboCidKeyData VAR_14;
 ComboCidEntry VAR_15;
 bool VAR_16;





 if (VAR_8 == ((void*)0))
 {
  HASHCTL VAR_17;


  VAR_7 = (ComboCidKeyData *)
   FUNC_0(VAR_6,
          sizeof(ComboCidKeyData) * VAR_0);
  VAR_9 = VAR_0;
  VAR_10 = 0;

  FUNC_3(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.keysize = sizeof(ComboCidKeyData);
  VAR_17.entrysize = sizeof(ComboCidEntryData);
  VAR_17.hcxt = VAR_6;

  VAR_8 = FUNC_1("Combo CIDs",
        VAR_1,
        &VAR_17,
        VAR_4 | VAR_2 | VAR_3);
 }






 if (VAR_10 >= VAR_9)
 {
  int VAR_18 = VAR_9 * 2;

  VAR_7 = (ComboCidKeyData *)
   FUNC_4(VAR_7, sizeof(ComboCidKeyData) * VAR_18);
  VAR_9 = VAR_18;
 }




 VAR_14.cmin = VAR_11;
 VAR_14.cmax = VAR_12;
 VAR_15 = (ComboCidEntry) FUNC_2(VAR_8,
          (void *) &VAR_14,
          VAR_5,
          &VAR_16);

 if (VAR_16)
 {

  return VAR_15->combocid;
 }


 VAR_13 = VAR_10;

 VAR_7[VAR_13].cmin = VAR_11;
 VAR_7[VAR_13].cmax = VAR_12;
 VAR_10++;

 VAR_15->combocid = VAR_13;

 return VAR_13;
}

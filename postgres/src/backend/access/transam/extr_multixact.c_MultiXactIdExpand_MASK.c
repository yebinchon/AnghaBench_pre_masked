
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_5__ {scalar_t__ status; void* xid; } ;
typedef scalar_t__ MultiXactStatus ;
typedef TYPE_1__ MultiXactMember ;
typedef void* MultiXactId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (void*,TYPE_1__**,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (void*) ;
 size_t VAR_1 ;
 void** VAR_2 ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*,void*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,char*,void*) ;
 int FUNC_11 (int ,char*,void*,void*) ;
 int FUNC_12 (int ,char*,void*,void*,int ) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;

MultiXactId
FUNC_16(MultiXactId VAR_3, TransactionId VAR_4, MultiXactStatus VAR_5)
{
 MultiXactId VAR_6;
 MultiXactMember *VAR_7;
 MultiXactMember *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_1(FUNC_5(VAR_3));
 FUNC_1(FUNC_9(VAR_4));


 FUNC_0(FUNC_5(VAR_2[VAR_1]));

 FUNC_12(VAR_0, "Expand: received multi %u, xid %u status %s",
    VAR_3, VAR_4, FUNC_13(VAR_5));






 VAR_9 = FUNC_2(VAR_3, &VAR_7, 0, 0);

 if (VAR_9 < 0)
 {
  MultiXactMember VAR_12;
  VAR_12.xid = VAR_4;
  VAR_12.status = VAR_5;
  VAR_6 = FUNC_4(1, &VAR_12);

  FUNC_11(VAR_0, "Expand: %u has no members, create singleton %u",
     VAR_3, VAR_6);
  return VAR_6;
 }





 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  if (FUNC_7(VAR_7[VAR_10].xid, VAR_4) &&
   (VAR_7[VAR_10].status == VAR_5))
  {
   FUNC_11(VAR_0, "Expand: %u is already a member of %u",
      VAR_4, VAR_3);
   FUNC_15(VAR_7);
   return VAR_3;
  }
 }
 VAR_8 = (MultiXactMember *)
  FUNC_14(sizeof(MultiXactMember) * (VAR_9 + 1));

 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  if (FUNC_8(VAR_7[VAR_10].xid) ||
   (FUNC_3(VAR_7[VAR_10].status) &&
    FUNC_6(VAR_7[VAR_10].xid)))
  {
   VAR_8[VAR_11].xid = VAR_7[VAR_10].xid;
   VAR_8[VAR_11++].status = VAR_7[VAR_10].status;
  }
 }

 VAR_8[VAR_11].xid = VAR_4;
 VAR_8[VAR_11++].status = VAR_5;
 VAR_6 = FUNC_4(VAR_11, VAR_8);

 FUNC_15(VAR_7);
 FUNC_15(VAR_8);

 FUNC_10(VAR_0, "Expand: returning new multi %u", VAR_6);

 return VAR_6;
}

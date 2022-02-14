
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lxid; } ;
struct TYPE_4__ {scalar_t__ lxid; int relid; } ;
typedef TYPE_1__* SeqTable ;
typedef int ResourceOwner ;
typedef int Relation ;
typedef scalar_t__ LocalTransactionId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static Relation
FUNC_2(SeqTable VAR_5)
{
 LocalTransactionId VAR_6 = VAR_1->lxid;


 if (VAR_5->lxid != VAR_6)
 {
  ResourceOwner VAR_7;

  VAR_7 = VAR_0;
  VAR_0 = VAR_4;

  FUNC_0(VAR_5->relid, VAR_3);

  VAR_0 = VAR_7;


  VAR_5->lxid = VAR_6;
 }


 return FUNC_1(VAR_5->relid, VAR_2);
}

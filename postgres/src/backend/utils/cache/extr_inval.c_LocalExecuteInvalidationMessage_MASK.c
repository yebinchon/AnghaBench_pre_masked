
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct RELCACHECALLBACK {int arg; int (* function ) (int ,scalar_t__) ;} ;
struct TYPE_16__ {int backend; int node; } ;
struct TYPE_14__ {scalar_t__ dbId; } ;
struct TYPE_13__ {int backend_hi; scalar_t__ backend_lo; int rnode; } ;
struct TYPE_12__ {scalar_t__ dbId; scalar_t__ relId; } ;
struct TYPE_11__ {scalar_t__ dbId; int catId; } ;
struct TYPE_10__ {scalar_t__ dbId; int hashValue; int id; } ;
struct TYPE_15__ {scalar_t__ id; TYPE_5__ rm; TYPE_4__ sm; TYPE_3__ rc; TYPE_2__ cat; TYPE_1__ cc; } ;
typedef TYPE_6__ SharedInvalidationMessage ;
typedef TYPE_7__ RelFileNodeBackend ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int VAR_8 ;
 struct RELCACHECALLBACK* VAR_9 ;
 int FUNC_8 (TYPE_7__) ;
 int FUNC_9 (int ,scalar_t__) ;

void
FUNC_10(SharedInvalidationMessage *VAR_10)
{
 if (VAR_10->id >= 0)
 {
  if (VAR_10->cc.dbId == VAR_2 || VAR_10->cc.dbId == VAR_1)
  {
   FUNC_2();

   FUNC_6(VAR_10->cc.id, VAR_10->cc.hashValue);

   FUNC_0(VAR_10->cc.id, VAR_10->cc.hashValue);
  }
 }
 else if (VAR_10->id == VAR_3)
 {
  if (VAR_10->cat.dbId == VAR_2 || VAR_10->cat.dbId == VAR_1)
  {
   FUNC_2();

   FUNC_1(VAR_10->cat.catId);


  }
 }
 else if (VAR_10->id == VAR_4)
 {
  if (VAR_10->rc.dbId == VAR_2 || VAR_10->rc.dbId == VAR_1)
  {
   int VAR_11;

   if (VAR_10->rc.relId == VAR_1)
    FUNC_3();
   else
    FUNC_4(VAR_10->rc.relId);

   for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
   {
    struct RELCACHECALLBACK *VAR_12 = VAR_9 + VAR_11;

    VAR_12->function(VAR_12->arg, VAR_10->rc.relId);
   }
  }
 }
 else if (VAR_10->id == VAR_6)
 {




  RelFileNodeBackend VAR_13;

  VAR_13.node = VAR_10->sm.rnode;
  VAR_13.backend = (VAR_10->sm.backend_hi << 16) | (int) VAR_10->sm.backend_lo;
  FUNC_8(VAR_13);
 }
 else if (VAR_10->id == VAR_5)
 {

  if (VAR_10->rm.dbId == VAR_1)
   FUNC_5(1);
  else if (VAR_10->rm.dbId == VAR_2)
   FUNC_5(0);
 }
 else if (VAR_10->id == VAR_7)
 {

  if (VAR_10->rm.dbId == VAR_1)
   FUNC_2();
  else if (VAR_10->rm.dbId == VAR_2)
   FUNC_2();
 }
 else
  FUNC_7(VAR_0, "unrecognized SI message ID: %d", VAR_10->id);
}

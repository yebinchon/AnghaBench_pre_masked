
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_12__ {int const* inforec; int user_fn; int fn_tid; int fn_xmin; } ;
struct TYPE_11__ {int oid; } ;
struct TYPE_10__ {int keysize; int entrysize; } ;
struct TYPE_9__ {int t_self; int t_data; } ;
typedef int Pg_finfo_record ;
typedef int PGFunction ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__ HASHCTL ;
typedef TYPE_3__* Form_pg_proc ;
typedef TYPE_4__ CFuncHashTabEntry ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int * FUNC_3 (char*,int,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int*) ;

__attribute__((used)) static void
FUNC_5(HeapTuple VAR_4,
     PGFunction VAR_5, const Pg_finfo_record *VAR_6)
{
 Oid VAR_7 = ((Form_pg_proc) FUNC_0(VAR_4))->oid;
 CFuncHashTabEntry *VAR_8;
 bool VAR_9;


 if (VAR_0 == ((void*)0))
 {
  HASHCTL VAR_10;

  FUNC_2(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.keysize = sizeof(Oid);
  VAR_10.entrysize = sizeof(CFuncHashTabEntry);
  VAR_0 = FUNC_3("CFuncHash",
        100,
        &VAR_10,
        VAR_2 | VAR_1);
 }

 VAR_8 = (CFuncHashTabEntry *)
  FUNC_4(VAR_0,
     &VAR_7,
     VAR_3,
     &VAR_9);

 VAR_8->fn_xmin = FUNC_1(VAR_4->t_data);
 VAR_8->fn_tid = VAR_4->t_self;
 VAR_8->user_fn = VAR_5;
 VAR_8->inforec = VAR_6;
}

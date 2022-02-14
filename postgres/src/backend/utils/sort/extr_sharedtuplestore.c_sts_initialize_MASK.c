
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {int nparticipants; size_t meta_data_size; int flags; TYPE_1__* participants; int name; } ;
struct TYPE_8__ {int participant; int context; int * fileset; TYPE_3__* sts; } ;
struct TYPE_7__ {int writing; scalar_t__ read_page; int lock; } ;
typedef TYPE_2__ SharedTuplestoreAccessor ;
typedef TYPE_3__ SharedTuplestore ;
typedef int SharedFileSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const*) ;

SharedTuplestoreAccessor *
FUNC_6(SharedTuplestore *VAR_4, int VAR_5,
      int VAR_6,
      size_t VAR_7,
      int VAR_8,
      SharedFileSet *VAR_9,
      const char *VAR_10)
{
 SharedTuplestoreAccessor *VAR_11;
 int VAR_12;

 FUNC_0(VAR_6 < VAR_5);

 VAR_4->nparticipants = VAR_5;
 VAR_4->meta_data_size = VAR_7;
 VAR_4->flags = VAR_8;

 if (FUNC_5(VAR_10) > sizeof(VAR_4->name) - 1)
  FUNC_2(VAR_1, "SharedTuplestore name too long");
 FUNC_4(VAR_4->name, VAR_10);







 if (VAR_7 + sizeof(uint32) >= VAR_3)
  FUNC_2(VAR_1, "meta-data too long");

 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
 {
  FUNC_1(&VAR_4->participants[VAR_12].lock,
       VAR_2);
  VAR_4->participants[VAR_12].read_page = 0;
  VAR_4->participants[VAR_12].writing = 0;
 }

 VAR_11 = FUNC_3(sizeof(SharedTuplestoreAccessor));
 VAR_11->participant = VAR_6;
 VAR_11->sts = VAR_4;
 VAR_11->fileset = VAR_9;
 VAR_11->context = VAR_0;

 return VAR_11;
}

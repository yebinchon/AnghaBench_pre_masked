
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_14__ {TYPE_1__* result; int copy_is_binary; } ;
struct TYPE_13__ {int format; } ;
struct TYPE_12__ {int numAttributes; TYPE_2__* attDescs; int binary; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGresAttDesc ;
typedef TYPE_3__ PGconn ;
typedef int ExecStatusType ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int*,int,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_6(PGconn *VAR_1, ExecStatusType VAR_2)
{
 PGresult *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  goto failure;

 if (FUNC_4(&VAR_1->copy_is_binary, VAR_1))
  goto failure;
 VAR_3->binary = VAR_1->copy_is_binary;

 if (FUNC_3(&(VAR_3->numAttributes), 2, VAR_1))
  goto failure;
 VAR_4 = VAR_3->numAttributes;


 if (VAR_4 > 0)
 {
  VAR_3->attDescs = (PGresAttDesc *)
   FUNC_5(VAR_3, VAR_4 * sizeof(PGresAttDesc), 1);
  if (!VAR_3->attDescs)
   goto failure;
  FUNC_0(VAR_3->attDescs, 0, VAR_4 * sizeof(PGresAttDesc));
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  int VAR_6;

  if (FUNC_3(&VAR_6, 2, VAR_1))
   goto failure;





  VAR_6 = (int) ((int16) VAR_6);
  VAR_3->attDescs[VAR_5].format = VAR_6;
 }


 VAR_1->result = VAR_3;
 return 0;

failure:
 FUNC_1(VAR_3);
 return VAR_0;
}

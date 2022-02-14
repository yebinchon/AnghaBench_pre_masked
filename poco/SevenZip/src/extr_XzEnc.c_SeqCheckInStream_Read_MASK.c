
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_2__*,void*,size_t*) ;} ;
struct TYPE_3__ {size_t processed; int check; TYPE_2__* realStream; } ;
typedef int SRes ;
typedef TYPE_1__ CSeqCheckInStream ;


 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (TYPE_2__*,void*,size_t*) ;

__attribute__((used)) static SRes FUNC_2(void *VAR_0, void *VAR_1, size_t *VAR_2)
{
  CSeqCheckInStream *VAR_3 = (CSeqCheckInStream *)VAR_0;
  SRes VAR_4 = VAR_3->realStream->Read(VAR_3->realStream, VAR_1, VAR_2);
  FUNC_0(&VAR_3->check, VAR_1, *VAR_2);
  VAR_3->processed += *VAR_2;
  return VAR_4;
}

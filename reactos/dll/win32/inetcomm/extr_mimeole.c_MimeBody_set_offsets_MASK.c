
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbBodyEnd; int cbBodyStart; int cbHeaderStart; int cbBoundaryStart; } ;
struct TYPE_5__ {TYPE_2__ body_offsets; } ;
typedef TYPE_1__ MimeBody ;
typedef int HRESULT ;
typedef TYPE_2__ BODYOFFSETS ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_1(MimeBody *VAR_1, const BODYOFFSETS *VAR_2)
{
    FUNC_0("setting offsets to %d, %d, %d, %d\n", VAR_2->cbBoundaryStart,
          VAR_2->cbHeaderStart, VAR_2->cbBodyStart, VAR_2->cbBodyEnd);

    VAR_1->body_offsets = *VAR_2;
    return VAR_0;
}

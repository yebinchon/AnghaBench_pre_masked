
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pbData; } ;
struct TYPE_12__ {int pbData; } ;
struct TYPE_11__ {int pbData; } ;
struct TYPE_10__ {int pbData; } ;
struct TYPE_9__ {int pbData; } ;
struct TYPE_8__ {int pbData; } ;
struct protect_data_t {TYPE_1__ fingerprint; TYPE_6__ cipher; TYPE_5__ salt; TYPE_4__ data0; int szDataDescr; TYPE_3__ info1; TYPE_2__ info0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static
void FUNC_2(struct protect_data_t * VAR_0)
{
    FUNC_1("called\n");

    if (!VAR_0) return;

    FUNC_0(VAR_0->info0.pbData);
    FUNC_0(VAR_0->info1.pbData);
    FUNC_0(VAR_0->szDataDescr);
    FUNC_0(VAR_0->data0.pbData);
    FUNC_0(VAR_0->salt.pbData);
    FUNC_0(VAR_0->cipher.pbData);
    FUNC_0(VAR_0->fingerprint.pbData);
}

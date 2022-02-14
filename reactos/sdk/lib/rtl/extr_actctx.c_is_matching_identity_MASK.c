
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; scalar_t__ build; scalar_t__ revision; } ;
struct assembly_identity {TYPE_1__ version; scalar_t__ language; int public_key; int arch; int name; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_3( const struct assembly_identity *VAR_3,
                                  const struct assembly_identity *VAR_4 )
{
    if (!FUNC_0( VAR_3->name, VAR_4->name )) return VAR_0;
    if (!FUNC_0( VAR_3->arch, VAR_4->arch )) return VAR_0;
    if (!FUNC_0( VAR_3->public_key, VAR_4->public_key )) return VAR_0;

    if (VAR_3->language && VAR_4->language && FUNC_2( VAR_3->language, VAR_4->language ))
    {
        if (FUNC_1( VAR_2, VAR_3->language ) && FUNC_1( VAR_2, VAR_4->language ))
            return VAR_0;
    }
    if (VAR_3->version.major != VAR_4->version.major) return VAR_0;
    if (VAR_3->version.minor != VAR_4->version.minor) return VAR_0;
    if (VAR_3->version.build > VAR_4->version.build) return VAR_0;
    if (VAR_3->version.build == VAR_4->version.build &&
        VAR_3->version.revision > VAR_4->version.revision) return VAR_0;
    return VAR_1;
}

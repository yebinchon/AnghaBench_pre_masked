
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* writeF ) (int *,char const*,size_t) ;} ;
typedef TYPE_1__ CompressorState ;
typedef int ArchiveHandle ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, CompressorState *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 VAR_1->writeF(VAR_0, VAR_2, VAR_3);
 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_3__ {size_t ntablespaces; int * tablespaces; } ;
typedef TYPE_1__ SharedFileSet ;
typedef int Oid ;


 size_t FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static Oid
FUNC_2(const SharedFileSet *VAR_0, const char *VAR_1)
{
 uint32 VAR_2 = FUNC_0((const unsigned char *) VAR_1, FUNC_1(VAR_1));

 return VAR_0->tablespaces[VAR_2 % VAR_0->ntablespaces];
}

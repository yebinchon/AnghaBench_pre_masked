
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_7__ {unsigned char* begin; } ;
struct RangeParser {TYPE_1__ ipv6; } ;
struct TYPE_8__ {unsigned long long hi; unsigned long long lo; } ;
typedef TYPE_2__ ipv6address ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_1(struct RangeParser *VAR_0, ipv6address *VAR_1, ipv6address *VAR_2)
{
    const unsigned char *VAR_3;

    VAR_3 = VAR_0->ipv6.begin;
    VAR_1->hi = (((uint64_t)VAR_3[0]) << 56ULL)
    | ((uint64_t)VAR_3[1] << 48ULL)
    | ((uint64_t)VAR_3[2] << 40ULL)
    | ((uint64_t)VAR_3[3] << 32ULL)
    | ((uint64_t)VAR_3[4] << 24ULL)
    | ((uint64_t)VAR_3[5] << 16ULL)
    | ((uint64_t)VAR_3[6] << 8ULL)
    | ((uint64_t)VAR_3[7] << 0ULL);
    VAR_1->lo = ((uint64_t)VAR_3[ 8] << 56ULL)
    | ((uint64_t)VAR_3[ 9] << 48ULL)
    | ((uint64_t)VAR_3[10] << 40ULL)
    | ((uint64_t)VAR_3[11] << 32ULL)
    | ((uint64_t)VAR_3[12] << 24ULL)
    | ((uint64_t)VAR_3[13] << 16ULL)
    | ((uint64_t)VAR_3[14] << 8ULL)
    | ((uint64_t)VAR_3[15] << 0ULL);

    FUNC_0(VAR_2, VAR_1, sizeof(*VAR_1));
}

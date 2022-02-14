
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sst_dirlen; size_t sst_ss; } ;
typedef TYPE_1__ cdf_stream_t ;
struct TYPE_8__ {scalar_t__ h_min_size_standard_stream; } ;
typedef TYPE_2__ cdf_header_t ;


 size_t FUNC_0 (TYPE_2__ const*) ;
 size_t FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static size_t
FUNC_3(const cdf_stream_t *VAR_0, const cdf_header_t *VAR_1)
{

 size_t VAR_2 = VAR_0->sst_dirlen < VAR_1->h_min_size_standard_stream ?
     FUNC_1(VAR_1) : FUNC_0(VAR_1);
 FUNC_2(VAR_2 == VAR_0->sst_ss);

 return VAR_0->sst_ss;
}

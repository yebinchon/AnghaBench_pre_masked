
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct image {int components; int padding; double multiplier; TYPE_3__* tex; } ;
struct TYPE_8__ {unsigned long long component_bits; } ;
struct gl_video {TYPE_4__ ra_format; } ;
struct TYPE_6__ {TYPE_1__* format; } ;
struct TYPE_7__ {TYPE_2__ params; } ;
struct TYPE_5__ {scalar_t__ ctype; } ;


 int FUNC_0 (char*,char*,double,int,int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (struct image*) ;
 int FUNC_3 (struct gl_video*,struct image) ;

__attribute__((used)) static void FUNC_4(struct gl_video *VAR_1, int *VAR_2, struct image VAR_3)
{
    int VAR_4 = VAR_3.components;
    FUNC_1(*VAR_2 + VAR_4 <= 4);
    FUNC_1(VAR_3.padding + VAR_4 <= 4);

    int VAR_5 = FUNC_3(VAR_1, VAR_3);
    char VAR_6[5] = {0};
    char VAR_7[5] = {0};
    const char *VAR_8 = FUNC_2(&VAR_3);
    const char *VAR_9 = "rgba";
    for (int VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_6[VAR_10] = VAR_8[VAR_3.padding + VAR_10];
        VAR_7[VAR_10] = VAR_9[*VAR_2 + VAR_10];
    }

    if (VAR_3.tex && VAR_3.tex->params.format->ctype == VAR_0) {
        uint64_t VAR_11 = 1ull << VAR_1->ra_format.component_bits;
        VAR_3.multiplier *= 1.0 / (VAR_11 - 1);
    }

    FUNC_0("color.%s = %f * vec4(texture(texture%d, texcoord%d)).%s;\n",
          VAR_7, VAR_3.multiplier, VAR_5, VAR_5, VAR_6);

    *VAR_2 += VAR_4;
}

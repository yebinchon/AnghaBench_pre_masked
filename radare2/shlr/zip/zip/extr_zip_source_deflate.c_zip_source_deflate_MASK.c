
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_int32_t ;
struct zip_source {int dummy; } ;
struct zip {int error; } ;
struct deflate {int mem_level; scalar_t__ eof; scalar_t__* e; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct deflate*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct zip*,int ,int ) ;
 struct zip_source* FUNC_5 (struct zip*,struct zip_source*,int ,struct deflate*) ;

struct zip_source *
FUNC_6(struct zip *VAR_9, struct zip_source *VAR_10,
     zip_int32_t VAR_11, int VAR_12)
{
    struct deflate *VAR_13;
    struct zip_source *VAR_14;

    if (VAR_10 == ((void*)0) || (VAR_11 != VAR_3 && !FUNC_0(VAR_11))) {
 FUNC_1(&VAR_9->error, VAR_5, 0);
 return ((void*)0);
    }

    if ((VAR_13=(struct deflate *)FUNC_3(sizeof(*VAR_13))) == ((void*)0)) {
 FUNC_1(&VAR_9->error, VAR_6, 0);
 return ((void*)0);
    }

    VAR_13->e[0] = VAR_13->e[1] = 0;
    VAR_13->eof = 0;
    if (VAR_12 & VAR_4) {
 if (FUNC_4(VAR_9, VAR_2, 0))
     VAR_13->mem_level = VAR_1;
 else
     VAR_13->mem_level = VAR_0;
    }

    if ((VAR_14=FUNC_5(VAR_9, VAR_10,
          ((VAR_12 & VAR_4)
    ? VAR_7 : VAR_8),
          VAR_13)) == ((void*)0)) {
 FUNC_2(VAR_13);
 return ((void*)0);
    }

    return VAR_14;
}

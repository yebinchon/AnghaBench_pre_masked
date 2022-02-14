
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_source {int dummy; } ;
struct zip {int error; } ;
struct crc_context {int validate; scalar_t__ crc; scalar_t__ size; scalar_t__* e; scalar_t__ eof; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct zip_source* FUNC_2 (struct zip*,struct zip_source*,int ,struct crc_context*) ;

struct zip_source *
FUNC_3(struct zip *VAR_3, struct zip_source *VAR_4, int VAR_5)
{
    struct crc_context *VAR_6;

    if (VAR_4 == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_0, 0);
 return ((void*)0);
    }

    if ((VAR_6=(struct crc_context *)FUNC_1(sizeof(*VAR_6))) == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_1, 0);
 return ((void*)0);
    }

    VAR_6->eof = 0;
    VAR_6->validate = VAR_5;
    VAR_6->e[0] = VAR_6->e[1] = 0;
    VAR_6->size = 0;
    VAR_6->crc = 0;

    return FUNC_2(VAR_3, VAR_4, VAR_2, VAR_6);
}

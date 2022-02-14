
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {scalar_t__ mode; scalar_t__ mtime; int id; } ;
typedef TYPE_1__ SeafDirent ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) inline static gboolean
FUNC_1 (SeafDirent *VAR_0, SeafDirent *VAR_1)
{
    return (FUNC_0 (VAR_1->id, VAR_0->id) == 0 &&
     VAR_0->mode == VAR_1->mode &&
     VAR_0->mtime == VAR_1->mtime);
}

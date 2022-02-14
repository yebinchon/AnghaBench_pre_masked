
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; scalar_t__ freeData; struct TYPE_4__* glyphs; } ;
typedef TYPE_1__ FONSfont ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(FONSfont* VAR_0)
{
 if (VAR_0 == ((void*)0)) return;
 if (VAR_0->glyphs) FUNC_0(VAR_0->glyphs);
 if (VAR_0->freeData && VAR_0->data) FUNC_0(VAR_0->data);
 FUNC_0(VAR_0);
}

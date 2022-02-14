
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * palette_map; int bDecompress; } ;
typedef int LRESULT ;
typedef TYPE_1__ CodecInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static LRESULT FUNC_3(CodecInfo *VAR_2)
{
  FUNC_1("(%p)\n",VAR_2);


  FUNC_2(VAR_2 != ((void*)0));

  VAR_2->bDecompress = VAR_0;

  if (VAR_2->palette_map != ((void*)0)) {
    FUNC_0(VAR_2->palette_map);
    VAR_2->palette_map = ((void*)0);
  }

  return VAR_1;
}

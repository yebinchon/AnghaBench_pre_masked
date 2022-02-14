
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char const* mangled; } ;
typedef TYPE_1__ type_info ;
struct TYPE_11__ {char const* name; int do_free; int * vtable; } ;
typedef TYPE_2__ exception ;
typedef int e2 ;
typedef int e ;


 int VAR_0 ;
 char* FUNC_0 (void*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (void*,TYPE_2__*,...) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int,char*,...) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
  static const char* VAR_12 = "A __non_rtti_object name";
  char* VAR_13;
  exception VAR_14, VAR_15, *VAR_16;

  if (!&FUNC_5 || !VAR_11 ||
      !VAR_2 || !VAR_1 ||
      !VAR_3 || !VAR_4 || !VAR_8 ||
      !VAR_7 || !VAR_6 || !VAR_5)
    return;


  FUNC_2(&VAR_14, 0, sizeof(VAR_14));
  FUNC_1(VAR_2, &VAR_14, VAR_12);
  FUNC_3(VAR_14.vtable != ((void*)0), "Null __non_rtti_object vtable for e\n");
  FUNC_3(VAR_14.name && VAR_14.name != VAR_12 && !FUNC_6(VAR_14.name, "A __non_rtti_object name"), "Bad name '%s' for e\n", VAR_14.name);
  FUNC_3(VAR_14.do_free == 1, "do_free set to %d for e\n", VAR_14.do_free);


  FUNC_2(&VAR_15, 0, sizeof(VAR_15));
  FUNC_1(VAR_1, &VAR_15, &VAR_14);
  FUNC_3(VAR_15 != ((void*)0), "Null __non_rtti_object vtable for e2\n");
  FUNC_3(VAR_15 && VAR_15 != VAR_14.name && !FUNC_6(VAR_15, "A __non_rtti_object name"), "Bad name '%s' for e2\n", VAR_15);
  FUNC_3(VAR_15 == 1, "do_free set to %d for e2\n", VAR_15);
  FUNC_3(VAR_14.vtable == VAR_15, "__non_rtti_object vtables differ!\n");


  FUNC_0(VAR_3, &VAR_15);


  FUNC_2(&VAR_15, 1, sizeof(VAR_15));
  FUNC_0(VAR_9, &VAR_15);
  VAR_16 = FUNC_1(VAR_4, &VAR_15, &VAR_14);
  FUNC_3(VAR_15 != ((void*)0), "Null __non_rtti_object vtable for e2\n");
  FUNC_3(VAR_15 && VAR_15 != VAR_14.name && !FUNC_6(VAR_15, "A __non_rtti_object name"), "Bad __non_rtti_object name for e2\n");
  FUNC_3(VAR_15 == 1, "do_free set to %d for e2\n", VAR_15);
  FUNC_3(VAR_16 == &VAR_15, "opequals didn't return e2\n");


  VAR_13 = FUNC_0(VAR_8, &VAR_15);
  FUNC_3(VAR_15 == VAR_13, "Bad __non_rtti_object name from e2::what()\n");


  FUNC_3(VAR_15 == VAR_10, "Bad vtable for e2\n");
  FUNC_0(VAR_3, &VAR_15);


  VAR_16 = FUNC_5(sizeof(exception));
  FUNC_3(VAR_16 != ((void*)0), "new() failed\n");
  if (VAR_16)
  {
    FUNC_1(VAR_2, VAR_16, VAR_12);

    FUNC_1(VAR_5, VAR_16, 0);
    VAR_16->name = ((void*)0);
    VAR_16->do_free = 0;
    FUNC_1(VAR_5, VAR_16, 1);
  }

  VAR_16 = FUNC_5(sizeof(exception));
  FUNC_3(VAR_16 != ((void*)0), "new() failed\n");
  if (VAR_16)
  {

    FUNC_1(VAR_2, VAR_16, VAR_12);
    FUNC_1(VAR_6, VAR_16, 1);
  }

  VAR_16 = FUNC_5(sizeof(exception) * 4 + sizeof(size_t));
  FUNC_3(VAR_16 != ((void*)0), "new() failed\n");
  if (VAR_16)
  {

    *((size_t*)VAR_16) = 3;
    VAR_16 = (exception*)((size_t*)VAR_16 + 1);
    FUNC_1(VAR_2, &VAR_16[0], VAR_12);
    FUNC_1(VAR_2, &VAR_16[1], VAR_12);
    FUNC_1(VAR_2, &VAR_16[2], VAR_12);
    VAR_16[3].name = 0;
    VAR_16[3].do_free = 1;
    FUNC_1(VAR_6, VAR_16, 3);
  }


  VAR_16 = (void*)VAR_7;
  VAR_6 = (void*)VAR_16->vtable;
  VAR_8 = (void*)VAR_16->name;

  VAR_13 = FUNC_0(VAR_8, &VAR_14);
  FUNC_3(VAR_14.name == VAR_13, "Bad __non_rtti_object name from vtable e::what()\n");

  if (&FUNC_4 && !VAR_0)
  {

    type_info *VAR_17 = FUNC_4(&VAR_14);
    FUNC_3 (VAR_17 != ((void*)0) && !FUNC_6(VAR_17->mangled, ".?AV__non_rtti_object@@"), "bad rtti for e\n");
  }
  FUNC_1(VAR_6, &VAR_14, 0);
}

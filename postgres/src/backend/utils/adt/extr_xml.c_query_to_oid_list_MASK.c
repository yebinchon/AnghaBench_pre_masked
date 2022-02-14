
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64 ;
struct TYPE_2__ {int tupdesc; int * vals; } ;
typedef int List ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (int ,int ,int,int*) ;
 size_t VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int ,char*,int ,char const*) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static List *
FUNC_6(const char *VAR_5)
{
 uint64 VAR_6;
 List *VAR_7 = VAR_1;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, 1, 0);
 if (VAR_8 != VAR_2)
  FUNC_4(VAR_0, "SPI_execute returned %s for %s",
    FUNC_3(VAR_8), VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  Datum VAR_9;
  bool VAR_10;

  VAR_9 = FUNC_2(VAR_4->vals[VAR_6],
       VAR_4->tupdesc,
       1,
       &VAR_10);
  if (!VAR_10)
   VAR_7 = FUNC_5(VAR_7, FUNC_0(VAR_9));
 }

 return VAR_7;
}

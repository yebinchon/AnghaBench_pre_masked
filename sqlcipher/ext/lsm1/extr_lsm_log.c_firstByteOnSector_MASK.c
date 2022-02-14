
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {int szSector; } ;
typedef TYPE_1__ LogWriter ;



__attribute__((used)) static i64 FUNC_0(LogWriter *VAR_0, i64 VAR_1){
  return (VAR_1 / VAR_0->szSector) * VAR_0->szSector;
}

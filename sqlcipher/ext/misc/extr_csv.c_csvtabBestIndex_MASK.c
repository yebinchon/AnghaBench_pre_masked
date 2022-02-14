
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_8__ {int estimatedCost; int nConstraint; TYPE_2__* aConstraintUsage; TYPE_1__* aConstraint; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_9__ {int tstFlags; } ;
struct TYPE_7__ {int argvIndex; } ;
struct TYPE_6__ {scalar_t__ usable; unsigned char op; } ;
typedef TYPE_4__ CsvTable ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab *VAR_5,
  sqlite3_index_info *VAR_6
){
  VAR_6->estimatedCost = 1000000;
  return VAR_4;
}

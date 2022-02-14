
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_location {int line; int column; int file_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(const char *VAR_2,
    struct source_location *VAR_3)
{
 FUNC_0("%s %s:%d:%d\n", VAR_2, VAR_3->file_name,
  VAR_3->line & VAR_1, VAR_3->column & VAR_0);
}

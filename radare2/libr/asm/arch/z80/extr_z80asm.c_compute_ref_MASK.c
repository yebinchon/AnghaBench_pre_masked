
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reference {int level; int addr; int baseaddr; int comma; int infile; char* input; int done; int computed_value; int delimiter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const**,int ,int*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct reference *VAR_5, int VAR_6) {
 const char *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = VAR_0;
 int VAR_10 = VAR_1;
 int VAR_11 = VAR_2;
 int VAR_12 = VAR_3;
 int VAR_13 = VAR_4;
 VAR_4 = VAR_5->level;
 VAR_0 = VAR_5->addr;
 VAR_1 = VAR_5->baseaddr;
 VAR_2 = VAR_5->comma;
 VAR_3 = VAR_5->infile;
 VAR_7 = VAR_5->input;
 if (!VAR_5->done) {
  VAR_5->computed_value = FUNC_0 (&VAR_7, VAR_5->delimiter,
   VAR_6? &VAR_8: ((void*)0),
   VAR_5->level, 1);
  if (VAR_8) {
   VAR_5->done = 1;
  }
 }
 VAR_4 = VAR_13;
 VAR_0 = VAR_9;
 VAR_1 = VAR_10;
 VAR_2 = VAR_11;
 VAR_3 = VAR_12;
 return VAR_5->computed_value;
}

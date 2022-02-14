
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int getlasterror; int finish; int existsfile; int sync; int close; int get_file_size; int get_current_pos; int write; int open_for_write; } ;
typedef TYPE_1__ WalWriteMethod ;
struct TYPE_5__ {int compression; int sync; int basedir; } ;
typedef int DirectoryMethodData ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

WalWriteMethod *
FUNC_2(const char *VAR_10, int VAR_11, bool VAR_12)
{
 WalWriteMethod *VAR_13;

 VAR_13 = FUNC_0(sizeof(WalWriteMethod));
 VAR_13->open_for_write = VAR_7;
 VAR_13->write = VAR_9;
 VAR_13->get_current_pos = VAR_4;
 VAR_13->get_file_size = VAR_5;
 VAR_13->close = VAR_0;
 VAR_13->sync = VAR_8;
 VAR_13->existsfile = VAR_2;
 VAR_13->finish = VAR_3;
 VAR_13->getlasterror = VAR_6;

 VAR_1 = FUNC_0(sizeof(DirectoryMethodData));
 VAR_1->compression = VAR_11;
 VAR_1->basedir = FUNC_1(VAR_10);
 VAR_1->sync = VAR_12;

 return VAR_13;
}

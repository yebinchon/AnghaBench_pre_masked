
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int getlasterror; int finish; int existsfile; int sync; int close; int get_file_size; int get_current_pos; int write; int open_for_write; } ;
typedef TYPE_1__ WalWriteMethod ;
typedef int TarMethodData ;
struct TYPE_5__ {int fd; int compression; int sync; char* zlibOut; void* tarfilename; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,char*,char const*,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

WalWriteMethod *
FUNC_4(const char *VAR_11, int VAR_12, bool VAR_13)
{
 WalWriteMethod *VAR_14;
 const char *VAR_15 = (VAR_12 != 0) ? ".tar.gz" : ".tar";

 VAR_14 = FUNC_1(sizeof(WalWriteMethod));
 VAR_14->open_for_write = VAR_8;
 VAR_14->write = VAR_10;
 VAR_14->get_current_pos = VAR_5;
 VAR_14->get_file_size = VAR_6;
 VAR_14->close = VAR_1;
 VAR_14->sync = VAR_9;
 VAR_14->existsfile = VAR_3;
 VAR_14->finish = VAR_4;
 VAR_14->getlasterror = VAR_7;

 VAR_2 = FUNC_1(sizeof(TarMethodData));
 VAR_2->tarfilename = FUNC_1(FUNC_3(VAR_11) + FUNC_3(VAR_15) + 1);
 FUNC_2(VAR_2->tarfilename, "%s%s", VAR_11, VAR_15);
 VAR_2->fd = -1;
 VAR_2->compression = VAR_12;
 VAR_2->sync = VAR_13;





 return VAR_14;
}

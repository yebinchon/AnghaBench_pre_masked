
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* time_t ;
struct TYPE_8__ {int st_mode; int st_nlink; int st_rdev; int st_dev; int st_blksize; int st_blocks; scalar_t__ st_ino; void* st_ctime; void* st_atime; void* st_mtime; int st_size; } ;
struct TYPE_9__ {TYPE_1__ sb; } ;
typedef TYPE_2__ php_stream_statbuf ;
struct TYPE_10__ {int mode; int fsize; } ;
typedef TYPE_3__ php_stream_memory_data ;
struct TYPE_11__ {scalar_t__ abstract; } ;
typedef TYPE_4__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_2, php_stream_statbuf *VAR_3)
{
 time_t VAR_4 = 0;
 php_stream_memory_data *VAR_5 = (php_stream_memory_data*)VAR_2->abstract;
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_1(VAR_3, 0, sizeof(php_stream_statbuf));


 VAR_3->sb.st_mode = VAR_5->mode & VAR_1 ? 0444 : 0666;

 VAR_3->sb.st_size = VAR_5->fsize;
 VAR_3->sb.st_mode |= VAR_0;
 VAR_3->sb.st_mtime = VAR_4;
 VAR_3->sb.st_atime = VAR_4;
 VAR_3->sb.st_ctime = VAR_4;
 VAR_3->sb.st_nlink = 1;
 VAR_3->sb.st_rdev = -1;

 VAR_3->sb.st_dev = 0xC;

 VAR_3->sb.st_ino = 0;


 VAR_3->sb.st_blksize = -1;
 VAR_3->sb.st_blocks = -1;


 return 0;
}

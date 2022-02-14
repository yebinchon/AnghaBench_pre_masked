
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int b ;
typedef int RBuffer ;


 int ELFMAG ;
 int SELFMAG ;
 int memcmp (int*,int ,int ) ;
 int r_buf_read_at (int *,int ,int*,int) ;

__attribute__((used)) static bool check_buffer(RBuffer *buf) {
 ut8 b[5] = {0};
 r_buf_read_at (buf, 0, b, sizeof (b));
 return !memcmp (b, ELFMAG, SELFMAG) && b[4] != 2;
}

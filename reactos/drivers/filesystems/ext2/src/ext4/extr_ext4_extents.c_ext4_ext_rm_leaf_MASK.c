
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int ee_block; void* ee_len; } ;
struct ext4_ext_path {int * p_bh; struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_3 (struct ext4_extent_header*) ;
 unsigned long long VAR_0 ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_7 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_8 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 unsigned short FUNC_9 (struct ext4_extent*) ;
 int FUNC_10 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_11 (struct ext4_extent*,int ) ;
 int FUNC_12 (void*,int *,struct inode*,struct ext4_extent*,unsigned int,unsigned int) ;
 struct ext4_extent_header* FUNC_13 (int *) ;
 int FUNC_14 (struct inode*) ;
 unsigned int FUNC_15 (scalar_t__) ;
 unsigned long FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(void *VAR_1, handle_t *VAR_2, struct inode *VAR_3,
  struct ext4_ext_path *VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = FUNC_14(VAR_3), VAR_9;
 struct ext4_extent_header *VAR_10;
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 unsigned short VAR_16;
 struct ext4_extent *VAR_17;


 if (!VAR_4[VAR_8].p_hdr)
  VAR_4[VAR_8].p_hdr = FUNC_13(VAR_4[VAR_8].p_bh);
 VAR_10 = VAR_4[VAR_8].p_hdr;
 FUNC_1(VAR_10 == ((void*)0));


 VAR_17 = FUNC_3(VAR_10);

 VAR_15 = FUNC_16(VAR_17->ee_block);
 VAR_16 = FUNC_9(VAR_17);

 while (VAR_17 >= FUNC_2(VAR_10) &&
   VAR_15 + VAR_16 > VAR_5) {
  VAR_4[VAR_8].p_ext = VAR_17;

  VAR_11 = VAR_15 > VAR_5 ? VAR_15 : VAR_5;
  VAR_12 = (unsigned long long)VAR_15 + VAR_16 - 1 <
   VAR_0 ? VAR_15 + VAR_16 - 1 : VAR_0;


  if (VAR_11 != VAR_15 && VAR_12 != VAR_15 + VAR_16 - 1) {
   VAR_13 = 0;
   VAR_14 = 0;
   FUNC_0();
  } else if (VAR_11 != VAR_15) {

   VAR_13 = VAR_15;
   VAR_14 = VAR_11 - VAR_13;
  } else if (VAR_12 != VAR_15 + VAR_16 - 1) {

   VAR_13 = VAR_11;
   VAR_14 = VAR_12 - VAR_11;

   FUNC_0();
  } else {

   VAR_13 = VAR_15;
   VAR_14 = 0;
   FUNC_1(VAR_11 != VAR_15);
   FUNC_1(VAR_12 != VAR_15 + VAR_16 - 1);
  }



  VAR_9 = 5;
  if (VAR_17 == FUNC_2(VAR_10)) {
   VAR_7 = 1;
   VAR_9 += (FUNC_14(VAR_3)) + 1;
  }







  VAR_6 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_8);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_12(VAR_1, VAR_2, VAR_3, VAR_17, VAR_11, VAR_12);
  if (VAR_6)
   goto out;

  if (VAR_14 == 0) {

   FUNC_11(VAR_17, 0);
   VAR_10->eh_entries = FUNC_4(FUNC_15(VAR_10->eh_entries)-1);
  }

  VAR_17->ee_block = FUNC_5(VAR_13);
  VAR_17->ee_len = FUNC_4(VAR_14);

  VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_8);
  if (VAR_6)
   goto out;

  VAR_17--;
  VAR_15 = FUNC_16(VAR_17->ee_block);
  VAR_16 = FUNC_9(VAR_17);
 }

 if (VAR_7 && VAR_10->eh_entries)
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);



 if (VAR_6 == 0 && VAR_10->eh_entries == 0 && VAR_4[VAR_8].p_bh != ((void*)0))
  VAR_6 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_8);

out:
 return VAR_6;
}

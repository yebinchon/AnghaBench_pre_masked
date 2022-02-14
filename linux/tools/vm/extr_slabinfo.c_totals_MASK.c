
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int slabs; unsigned long objects; unsigned long object_size; unsigned long long slab_size; int partial; int objects_partial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 unsigned long long FUNC_1 (struct slabinfo*) ;
 struct slabinfo* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,unsigned long long) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct slabinfo *VAR_4;

 int VAR_5 = 0;
 char VAR_6[20], VAR_7[20], VAR_8[20], VAR_9[20];
 unsigned long long VAR_10 = 1ULL << 63;


 unsigned long long VAR_11 = VAR_10, VAR_12 = 0, VAR_13;


 unsigned long long VAR_14 = VAR_10, VAR_15 = 0,
    VAR_16, VAR_17 = 0;


 unsigned long long VAR_18 = VAR_10, VAR_19 = 0,
    VAR_20, VAR_21 = 0;


 unsigned long long VAR_22 = VAR_10, VAR_23 = 0,
    VAR_24, VAR_25 = 0;


 unsigned long long VAR_26 = VAR_10, VAR_27 = 0,
    VAR_28, VAR_29 = 0;


 unsigned long long VAR_30 = VAR_10, VAR_31 = 0,
    VAR_32, VAR_33 = 0;

 unsigned long long VAR_34 = VAR_10, VAR_35 = 0,
    VAR_36, VAR_37 = 0;

 unsigned long long VAR_38 = VAR_10,
    VAR_39 = 0, VAR_40,
    VAR_41 = 0;


 unsigned long long VAR_42 = VAR_10,
    VAR_43 = 0, VAR_44,
    VAR_45 = 0;


 unsigned long VAR_46 = 100, VAR_47 = 0,
    VAR_48, VAR_49 = 0;


 unsigned long VAR_50 = VAR_10, VAR_51 = 0,
    VAR_52, VAR_53 = 0;


 unsigned long VAR_54 = 100, VAR_55 = 0,
    VAR_56, VAR_57 = 0;


 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++) {
  unsigned long long VAR_58;
  unsigned long VAR_59;
  unsigned long long VAR_60;
  unsigned long long VAR_61;
  unsigned long VAR_62;
  unsigned long VAR_63;

  if (!VAR_4->slabs || !VAR_4->objects)
   continue;

  VAR_5++;

  VAR_58 = FUNC_1(VAR_4);
  VAR_59 = VAR_4->objects * VAR_4->object_size;
  VAR_60 = VAR_58 - VAR_59;
  VAR_61 = VAR_4->slab_size - VAR_4->object_size;

  VAR_62 = VAR_4->partial * 100 / VAR_4->slabs;
  if (VAR_62 > 100)
   VAR_62 = 100;

  VAR_63 = VAR_4->objects_partial * 100
       / VAR_4->objects;

  if (VAR_63 > 100)
   VAR_63 = 100;

  if (VAR_4->object_size < VAR_11)
   VAR_11 = VAR_4->object_size;
  if (VAR_4->partial < VAR_14)
   VAR_14 = VAR_4->partial;
  if (VAR_4->slabs < VAR_18)
   VAR_18 = VAR_4->slabs;
  if (VAR_58 < VAR_22)
   VAR_22 = VAR_58;
  if (VAR_60 < VAR_30)
   VAR_30 = VAR_60;
  if (VAR_61 < VAR_38)
   VAR_38 = VAR_61;
  if (VAR_4->objects < VAR_34)
   VAR_34 = VAR_4->objects;
  if (VAR_59 < VAR_26)
   VAR_26 = VAR_59;
  if (VAR_4->objects_partial < VAR_50)
   VAR_50 = VAR_4->objects_partial;
  if (VAR_62 < VAR_46)
   VAR_46 = VAR_62;
  if (VAR_63 < VAR_54)
   VAR_54 = VAR_63;
  if (VAR_4->slab_size < VAR_42)
   VAR_42 = VAR_4->slab_size;

  if (VAR_4->object_size > VAR_12)
   VAR_12 = VAR_4->object_size;
  if (VAR_4->partial > VAR_15)
   VAR_15 = VAR_4->partial;
  if (VAR_4->slabs > VAR_19)
   VAR_19 = VAR_4->slabs;
  if (VAR_58 > VAR_23)
   VAR_23 = VAR_58;
  if (VAR_60 > VAR_31)
   VAR_31 = VAR_60;
  if (VAR_61 > VAR_39)
   VAR_39 = VAR_61;
  if (VAR_4->objects > VAR_35)
   VAR_35 = VAR_4->objects;
  if (VAR_59 > VAR_27)
   VAR_27 = VAR_59;
  if (VAR_4->objects_partial > VAR_51)
   VAR_51 = VAR_4->objects_partial;
  if (VAR_62 > VAR_47)
   VAR_47 = VAR_62;
  if (VAR_63 > VAR_55)
   VAR_55 = VAR_63;
  if (VAR_4->slab_size > VAR_43)
   VAR_43 = VAR_4->slab_size;

  VAR_17 += VAR_4->partial;
  VAR_21 += VAR_4->slabs;
  VAR_25 += VAR_58;
  VAR_33 += VAR_60;

  VAR_37 += VAR_4->objects;
  VAR_29 += VAR_59;
  VAR_53 += VAR_4->objects_partial;
  VAR_49 += VAR_62;
  VAR_57 += VAR_63;

  VAR_41 += VAR_4->objects * VAR_61;
  VAR_45 += VAR_4->objects * VAR_4->slab_size;
 }

 if (!VAR_37) {
  FUNC_0("No objects\n");
  return;
 }
 if (!VAR_5) {
  FUNC_0("No slabs\n");
  return;
 }


 VAR_16 = VAR_17 / VAR_5;
 VAR_20 = VAR_21 / VAR_5;
 VAR_24 = VAR_25 / VAR_5;
 VAR_32 = VAR_33 / VAR_5;

 VAR_36 = VAR_37 / VAR_5;
 VAR_28 = VAR_29 / VAR_5;
 VAR_52 = VAR_53 / VAR_5;
 VAR_48 = VAR_49 / VAR_5;
 VAR_56 = VAR_57 / VAR_5;


 VAR_13 = VAR_29 / VAR_37;
 VAR_40 = VAR_41 / VAR_37;
 VAR_52 = VAR_53 * 100 / VAR_37;
 VAR_44 = VAR_45 / VAR_37;

 FUNC_0("Slabcache Totals\n");
 FUNC_0("----------------\n");
 FUNC_0("Slabcaches : %15d   Aliases  : %11d->%-3d  Active:    %3d\n",
   VAR_3, VAR_1, VAR_0, VAR_5);

 FUNC_2(VAR_6, VAR_25);FUNC_2(VAR_7, VAR_33);
 FUNC_2(VAR_8, VAR_33 * 100 / VAR_29);
 FUNC_0("Memory used: %15s   # Loss   : %15s   MRatio:%6s%%\n", VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_6, VAR_37);FUNC_2(VAR_7, VAR_53);
 FUNC_2(VAR_8, VAR_53 * 100 / VAR_37);
 FUNC_0("# Objects  : %15s   # PartObj: %15s   ORatio:%6s%%\n", VAR_6, VAR_7, VAR_8);

 FUNC_0("\n");
 FUNC_0("Per Cache         Average              "
  "Min              Max            Total\n");
 FUNC_0("---------------------------------------"
  "-------------------------------------\n");

 FUNC_2(VAR_6, VAR_36);FUNC_2(VAR_7, VAR_34);
 FUNC_2(VAR_8, VAR_35);FUNC_2(VAR_9, VAR_37);
 FUNC_0("#Objects  %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_20);FUNC_2(VAR_7, VAR_18);
 FUNC_2(VAR_8, VAR_19);FUNC_2(VAR_9, VAR_21);
 FUNC_0("#Slabs    %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_16);FUNC_2(VAR_7, VAR_14);
 FUNC_2(VAR_8, VAR_15);FUNC_2(VAR_9, VAR_17);
 FUNC_0("#PartSlab %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_6, VAR_48);FUNC_2(VAR_7, VAR_46);
 FUNC_2(VAR_8, VAR_47);
 FUNC_2(VAR_9, VAR_17 * 100 / VAR_21);
 FUNC_0("%%PartSlab%15s%% %15s%% %15s%% %15s%%\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_52);FUNC_2(VAR_7, VAR_50);
 FUNC_2(VAR_8, VAR_51);
 FUNC_2(VAR_9, VAR_53);
 FUNC_0("PartObjs  %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_56);FUNC_2(VAR_7, VAR_54);
 FUNC_2(VAR_8, VAR_55);
 FUNC_2(VAR_9, VAR_53 * 100 / VAR_37);
 FUNC_0("%% PartObj%15s%% %15s%% %15s%% %15s%%\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_24);FUNC_2(VAR_7, VAR_22);
 FUNC_2(VAR_8, VAR_23);FUNC_2(VAR_9, VAR_25);
 FUNC_0("Memory    %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_28);FUNC_2(VAR_7, VAR_26);
 FUNC_2(VAR_8, VAR_27);FUNC_2(VAR_9, VAR_29);
 FUNC_0("Used      %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_6, VAR_32);FUNC_2(VAR_7, VAR_30);
 FUNC_2(VAR_8, VAR_31);FUNC_2(VAR_9, VAR_33);
 FUNC_0("Loss      %15s  %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_0("\n");
 FUNC_0("Per Object        Average              "
  "Min              Max\n");
 FUNC_0("---------------------------------------"
  "--------------------\n");

 FUNC_2(VAR_6, VAR_44);FUNC_2(VAR_7, VAR_42);
 FUNC_2(VAR_8, VAR_43);
 FUNC_0("Memory    %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_6, VAR_13);FUNC_2(VAR_7, VAR_11);
 FUNC_2(VAR_8, VAR_12);
 FUNC_0("User      %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_6, VAR_40);FUNC_2(VAR_7, VAR_38);
 FUNC_2(VAR_8, VAR_39);
 FUNC_0("Loss      %15s  %15s  %15s\n",
   VAR_6, VAR_7, VAR_8);
}
